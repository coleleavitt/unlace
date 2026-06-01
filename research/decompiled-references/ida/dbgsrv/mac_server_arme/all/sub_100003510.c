/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003510
// Address: 0x0000000100003510

//----- (0000000100003510) ----------------------------------------------------
bool __fastcall sub_100003510(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x21
  __int64 v9; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  char v25; // [xsp+0h] [xbp-60h]
  int v26; // [xsp+24h] [xbp-3Ch] BYREF
  __int64 v27; // [xsp+28h] [xbp-38h] BYREF
  int v28; // [xsp+34h] [xbp-2Ch] BYREF

  v8 = *(_QWORD *)(a2 + 8);
  v9 = a1[208];
  if ( v8 == v9 )
  {
    sub_1000593FC((__int64)a1, "dyld bpt, ea=%a\n", a3, a4, a5, a6, a7, a8, *(_QWORD *)(a2 + 8));
    if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, int *, int *, __int64 *))(*a1 + 728LL))(
           a1,
           *(unsigned int *)(a2 + 4),
           &v26,
           &v28,
           &v27) )
    {
      sub_1000593FC((__int64)a1, "notify args: mode=%d num_info=%d info_array=%a\n", v12, v13, v14, v15, v16, v17, v26);
      if ( v26 == 3 )
      {
        sub_1000593FC(
          (__int64)a1,
          "detected DYLD_IMAGE_DYLD_MOVED, reinitializing dyld...\n",
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v25);
        sub_1000036A0((__int64)a1);
        sub_100003974((__int64)a1);
      }
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 696LL))(a1, a2);
    sub_100003BEC((__int64)a1);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a2);
  }
  return v8 == v9;
}
// 1000035D0: variable 'v12' is possibly undefined
// 1000035D0: variable 'v13' is possibly undefined
// 1000035D0: variable 'v14' is possibly undefined
// 1000035D0: variable 'v15' is possibly undefined
// 1000035D0: variable 'v16' is possibly undefined
// 1000035D0: variable 'v17' is possibly undefined
// 1000035EC: variable 'v18' is possibly undefined
// 1000035EC: variable 'v19' is possibly undefined
// 1000035EC: variable 'v20' is possibly undefined
// 1000035EC: variable 'v21' is possibly undefined
// 1000035EC: variable 'v22' is possibly undefined
// 1000035EC: variable 'v23' is possibly undefined
// 1000035EC: variable 'v25' is possibly undefined
