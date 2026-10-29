/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_idc_func
// Address: 0x000000010003760C

//----- (000000010003760C) ----------------------------------------------------
__int64 __fastcall call_idc_func(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, char **a5, __int64 a6)
{
  __int64 v11; // x19
  _QWORD v13[19]; // [xsp+0h] [xbp-D0h] BYREF

  sub_1000376D4((__int64)v13, a6, 0);
  v11 = sub_10003570C(v13, a2, 0, a4, a3, a1, a5);
  sub_1000378A8((__int64)v13);
  return v11;
}
