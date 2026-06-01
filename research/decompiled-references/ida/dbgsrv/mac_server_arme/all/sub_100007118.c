/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007118
// Address: 0x0000000100007118

//----- (0000000100007118) ----------------------------------------------------
__int64 __fastcall sub_100007118(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        int a6,
        char *a7,
        __int64 a8)
{
  __int64 result; // x0
  unsigned int v10; // w20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // [xsp+10h] [xbp-20h] BYREF

  result = sub_1000588EC(a1, a2, a3, a4, a5, a6 | 0x50u, a7, a8, &v17);
  if ( (result & 0x80000000) == 0 && v17 )
  {
    v10 = result;
    qsleep(250);
    if ( (unsigned int)sub_100006848(a1, v17, v11, v12, v13, v14, v15, v16) )
      return v10;
    else
      return 4294967294LL;
  }
  return result;
}
// 100007178: variable 'v11' is possibly undefined
// 100007178: variable 'v12' is possibly undefined
// 100007178: variable 'v13' is possibly undefined
// 100007178: variable 'v14' is possibly undefined
// 100007178: variable 'v15' is possibly undefined
// 100007178: variable 'v16' is possibly undefined
