/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_idc_func
// Address: 0x0000000100038EE4

//----- (0000000100038EE4) ----------------------------------------------------
__int64 __fastcall call_idc_func(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, char **a5, __int64 a6)
{
  __int64 v11; // x19
  _QWORD v13[19]; // [xsp+0h] [xbp-D0h] BYREF

  sub_100038FB0((__int64)v13, a6, 0);
  v11 = sub_100036F8C(v13, a2, 0, a4, a3, a1, a5);
  sub_100039190((__int64)v13);
  return v11;
}
