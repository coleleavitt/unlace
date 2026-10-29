/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A264
// Address: 0x000000010004A264

//----- (000000010004A264) ----------------------------------------------------
__int64 __fastcall sub_10004A264(
        __int64 a1,
        char **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  void *v17; // [xsp+20h] [xbp-40h] BYREF
  __int64 v18; // [xsp+28h] [xbp-38h]
  __int64 v19; // [xsp+30h] [xbp-30h]

  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  sub_10004A0D4(a1 + 28, (char **)&v17, *(_DWORD *)(a1 + 24) == 25, a4, a5, a6, a7, a8);
  sub_10000273C(a2, "%s|%d|%d|%s", v10, v11, v12, v13, v14, v15, *(_QWORD *)a1);
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
  }
  return 1;
}
// 10004A2E4: variable 'v10' is possibly undefined
// 10004A2E4: variable 'v11' is possibly undefined
// 10004A2E4: variable 'v12' is possibly undefined
// 10004A2E4: variable 'v13' is possibly undefined
// 10004A2E4: variable 'v14' is possibly undefined
// 10004A2E4: variable 'v15' is possibly undefined
