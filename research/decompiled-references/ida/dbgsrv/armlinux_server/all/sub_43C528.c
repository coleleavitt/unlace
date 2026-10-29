/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C528
// Address: 0x000000000043C528

//----- (000000000043C528) ----------------------------------------------------
__int64 __fastcall sub_43C528(__int64 *a1, char *a2, __int64 *a3, int a4, __int64 a5)
{
  __int64 v10; // x1
  _QWORD v12[2]; // [xsp+48h] [xbp-18h] BYREF

  callui(11, (int)v12, (char *)callui);
  v10 = v12[0];
  v12[0] = &off_51A540;
  v12[1] = v10;
  return sub_450368(a1, a2, a3, a4, a5, (__int64)v12);
}
// 51A540: using guessed type __int64 (__fastcall *off_51A540)();
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
