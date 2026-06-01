/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055E88
// Address: 0x0000000100055E88

//----- (0000000100055E88) ----------------------------------------------------
char **__fastcall sub_100055E88(__int64 a1, __int64 *a2)
{
  void *v3; // x20
  __int64 v4; // x21
  __int64 v5; // x22
  void *v7; // [xsp+8h] [xbp-58h] BYREF
  __int64 v8; // [xsp+10h] [xbp-50h]
  __int64 v9; // [xsp+18h] [xbp-48h]
  char *v10[3]; // [xsp+20h] [xbp-40h] BYREF

  v7 = nullptr;
  v8 = 0;
  v9 = 0;
  sub_10001A184(&v7, a2);
  v3 = v7;
  v4 = v8;
  v5 = v9;
  v7 = nullptr;
  v8 = 0;
  v9 = 0;
  sub_100001344((char **)(a1 + 376));
  *(_QWORD *)(a1 + 376) = v3;
  *(_QWORD *)(a1 + 384) = v4;
  *(_QWORD *)(a1 + 392) = v5;
  memset(v10, 0, sizeof(v10));
  sub_10000AF04(v10);
  return sub_10000AF04((char **)&v7);
}
