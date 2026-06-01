/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000085A8
// Address: 0x00000001000085A8

//----- (00000001000085A8) ----------------------------------------------------
void __fastcall sub_1000085A8(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  char *v5; // x0
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 (__fastcall **v11)(); // [xsp+8h] [xbp-98h] BYREF
  int v12; // [xsp+10h] [xbp-90h]
  __int64 v13; // [xsp+14h] [xbp-8Ch]
  __int64 v14; // [xsp+1Ch] [xbp-84h]
  __int64 v15; // [xsp+24h] [xbp-7Ch]
  void *v16[2]; // [xsp+30h] [xbp-70h]
  __int128 v17; // [xsp+40h] [xbp-60h]
  __int128 v18; // [xsp+50h] [xbp-50h]
  __int64 v19; // [xsp+60h] [xbp-40h]
  __int64 v20; // [xsp+68h] [xbp-38h]
  _BYTE *v21; // [xsp+70h] [xbp-30h]

  if ( a3[3] )
    v5 = (char *)a3[2];
  else
    v5 = &byte_10007AE40;
  v12 = 16;
  v13 = 0;
  v15 = 0;
  v14 = 0;
  *(_OWORD *)v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v11 = off_10009CC60;
  v19 = a1;
  v20 = a2;
  v21 = qbasename(v5);
  sub_100005398(a1, (__int64)&v11, a3, v6, v7, v8, v9, v10);
  v11 = off_10009CBD0;
  if ( v16[1] )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16[1]);
  }
}
// 100008648: variable 'v6' is possibly undefined
// 100008648: variable 'v7' is possibly undefined
// 100008648: variable 'v8' is possibly undefined
// 100008648: variable 'v9' is possibly undefined
// 100008648: variable 'v10' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();
// 10009CC60: using guessed type __int64 (__fastcall *off_10009CC60[8])();
