/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008EC4
// Address: 0x0000000100008EC4

//----- (0000000100008EC4) ----------------------------------------------------
__int64 __fastcall sub_100008EC4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  __int64 v10; // x19
  __int64 (__fastcall **v12)(); // [xsp+0h] [xbp-E0h] BYREF
  int v13; // [xsp+8h] [xbp-D8h]
  __int64 v14; // [xsp+Ch] [xbp-D4h]
  __int64 v15; // [xsp+14h] [xbp-CCh]
  __int64 v16; // [xsp+1Ch] [xbp-C4h]
  void *v17[2]; // [xsp+28h] [xbp-B8h]
  __int128 v18; // [xsp+38h] [xbp-A8h]
  __int128 v19; // [xsp+48h] [xbp-98h]
  __int64 *v20; // [xsp+58h] [xbp-88h]
  __int64 v21; // [xsp+60h] [xbp-80h]
  __int64 v22; // [xsp+68h] [xbp-78h] BYREF
  __int128 v23; // [xsp+70h] [xbp-70h] BYREF
  __int128 v24; // [xsp+80h] [xbp-60h]
  void *v25[2]; // [xsp+90h] [xbp-50h]
  __int128 v26; // [xsp+A0h] [xbp-40h]

  *(_OWORD *)v25 = 0u;
  v26 = 0u;
  v23 = xmmword_10007AB80;
  v24 = 0u;
  v10 = -1;
  if ( (sub_100008B84(a1, (__int64)&v23, a2) & 1) != 0 )
  {
    v21 = a3;
    v22 = -1;
    v13 = 8;
    v14 = 0;
    v16 = 0;
    v15 = 0;
    *(_OWORD *)v17 = 0u;
    v18 = 0u;
    v19 = 0u;
    v12 = off_10009CD18;
    v20 = &v22;
    sub_100005398(a1, (__int64)&v12, (unsigned __int64 *)&v23, v5, v6, v7, v8, v9);
    v10 = v22;
    v12 = off_10009CBD0;
    if ( v17[1] )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17[1]);
    }
  }
  if ( v25[1] )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25[1]);
    v25[1] = nullptr;
    *((_QWORD *)&v26 + 1) = 0;
  }
  if ( (_QWORD)v24 )
  {
    *((_QWORD *)&v24 + 1) = 0;
    qfree((void *)v24);
  }
  return v10;
}
// 100008F78: variable 'v5' is possibly undefined
// 100008F78: variable 'v6' is possibly undefined
// 100008F78: variable 'v7' is possibly undefined
// 100008F78: variable 'v8' is possibly undefined
// 100008F78: variable 'v9' is possibly undefined
// 10007AB80: using guessed type __int128 xmmword_10007AB80;
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();
// 10009CD18: using guessed type __int64 (__fastcall *off_10009CD18[8])();
